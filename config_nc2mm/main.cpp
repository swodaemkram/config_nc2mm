#include "mainwindow.h"
#include <QApplication>
#include <iostream>
using namespace std;

char LogLocation[1024] = {};
char WebHookURL[1024] = {};
char Filter[250] = {};
char SentFromWhom[250] = {};
char RefreshTime[250] = {};
string LogLocationString = "";
string WebHookURLString = "";
string FilterString = "";
string SentFromWhomString = "";
string RefreshTimeString = "";



int main(int argc, char *argv[])
{


    QApplication a(argc, argv);


    FILE *Config_File = NULL;                        // declare config file Pointer

                    Config_File = fopen("/etc/ncrss2mmd.conf", "r");  	// Open config file
                    if (Config_File == NULL)

                    {
                        printf("Could not open Config File\n");
                        exit(1);
                    }

                    fscanf(Config_File,"%[^\n]\n", LogLocation); //This will Read to the end of each line until a carriage return
                    fscanf(Config_File,"%[^\n]\n", WebHookURL);	 //This will Read to the end of each line until a carriage return
                    fscanf(Config_File,"%[^\n]\n", Filter);		 //This will Read to the end of each line until a carriage return
                    fscanf(Config_File,"%[^\n]\n",SentFromWhom); //This will Read to the end of each line until a carriage return
                    fscanf(Config_File,"%[^\n]\n",RefreshTime);  //This will Read to the end of each line until a carriage return
                    fclose(Config_File);

                    LogLocationString = LogLocation;
                    WebHookURLString = WebHookURL;
                    FilterString = Filter;
                    SentFromWhomString = SentFromWhom;
                    RefreshTimeString = RefreshTime;


                    MainWindow w;
                    w.show();






    return a.exec();
}
