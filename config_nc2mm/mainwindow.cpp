#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

extern string LogLocationString;
extern string WebHookURLString;
extern string FilterString;
extern string SentFromWhomString;
extern string RefreshTimeString;
extern char LogLocation;
extern bool root;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

 /*
===============================================================================================================================
Are We root
===============================================================================================================================
 */

   if (root == true)
   {
       ui->label_6->hide();
       goto skipover;
   }

   ui->SaveButton->hide();

skipover:
/*
===============================================================================================================================
Load the text boxes with the current data
===============================================================================================================================
*/
    ui->plainTextEdit->setPlainText(LogLocationString.c_str());
    ui->plainTextEdit_2->setPlainText(WebHookURLString.c_str());
    ui->plainTextEdit_3->setPlainText(FilterString.c_str());
    ui->plainTextEdit_4->setPlainText(SentFromWhomString.c_str());
    ui->plainTextEdit_5->setPlainText(RefreshTimeString.c_str());
/*
================================================================================================================================
Finished Loading Text Boxes
================================================================================================================================
*/
}

/*
=================================================================================================================================
Destructor
=================================================================================================================================
 */
MainWindow::~MainWindow()
{
    delete ui;
}
/*
=================================================================================================================================
End of Destructor
=================================================================================================================================
Cancel Button
=================================================================================================================================
*/
void MainWindow::on_CancelButton_clicked()
{
 exit(0);
}
/*
================================================================================================================================
End of Cancel Button
================================================================================================================================
Save Button
================================================================================================================================
*/
void MainWindow::on_SaveButton_clicked()
{

     QString LogLocationString = ui->plainTextEdit->toPlainText();        // We have to use a QString to make this function work
     std::string NewLogLocationString = LogLocationString.toStdString();  // Convert the QString back to a Normal String
     QString WebHookURLString = ui->plainTextEdit_2->toPlainText();       // We have to use a QString to make this function work
     std::string NewWebHookURLString = WebHookURLString.toStdString();    // Convert the QString back to a Normal String
     QString FilterString = ui->plainTextEdit_3->toPlainText();           // We have to use a QString to make this function work
     std::string NewFilterString = FilterString.toStdString();            // Convert the QString back to a Normal String
     QString SentFromWhomString = ui->plainTextEdit_4->toPlainText();     // We have to use a QString to make this function work
     std::string NewSentFromWhomString = SentFromWhomString.toStdString();// Convert the QString back to a Normal String
     QString RefreshTimeString = ui->plainTextEdit_5->toPlainText();      // We have to use a QString to make this function work
     std::string NewRefreshTimeString = RefreshTimeString.toStdString();  // Convert the QString back to a Normal String
/*
================================================================================================================================
  Save Changes to File
================================================================================================================================
*/
     FILE *Config_File = NULL;
     Config_File = fopen("/etc/ncrss2mmd.conf", "r+");  	// Open config file
     int NewLogLocationStringLen = NewLogLocationString.length();
     fwrite(NewLogLocationString.c_str(),1,NewLogLocationStringLen,Config_File);
     fwrite("\n",1,1,Config_File);
     int NewWebHookURLStringLen = NewWebHookURLString.length();
     fwrite(NewWebHookURLString.c_str(),1,NewWebHookURLStringLen,Config_File);
     fwrite("\n",1,1,Config_File);
     int NewFilterStringLen = NewFilterString.length();
     fwrite(NewFilterString.c_str(),1,NewFilterStringLen,Config_File);
     fwrite("\n",1,1,Config_File);
     int NewSentFromWhomStringLen =  NewSentFromWhomString.length();
     fwrite(NewSentFromWhomString.c_str(),1,NewSentFromWhomStringLen,Config_File);
     fwrite("\n",1,1,Config_File);
     int NewRefreshTimeStringLen =  NewRefreshTimeString.length();
     fwrite(NewRefreshTimeString.c_str(),1,NewRefreshTimeStringLen,Config_File);
     fwrite("\n",1,1,Config_File);
     fwrite("End of config\n",1,14,Config_File);
     fclose(Config_File);
/*
================================================================================================================================
Finished Saving Changes to File
================================================================================================================================
*/
    // printf("%s\n",NewLogLocationString.c_str());                      //Print it out for a test
    // printf("%s\n",NewWebHookURLString.c_str());                       //Print it out for a test
    // printf("%s\n",NewFilterString.c_str());                           //Print it out for a test
    // printf("%s\n",NewSentFromWhomString.c_str());                     //Print it out for a test
    // printf("%s\n",NewRefreshTimeString.c_str());                      //Print it out for a test

 exit(0);

}
/*
================================================================================================================================
End of Save Button
================================================================================================================================
*/

