//database
#include <iostream>
#include "sqlite3.h"
using namespace std;

sqlite3 *db;
char *zErrMsg = 0;
int player;

// This is the callback function to display the select data in the table
static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
   int i;
   for(i=0; i<argc; i++)
   {
     printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

void main() {
player = sqlite3_open("p.db",&db);
if (!player) {cout << "database open successful!"<< endl;};
sqlite3_exec(db,"create table mytable (firstname varchar(30),lastname varchar(30),rate smallint",callback,0,&zErrMsg);

sqlite3_close(db);
}
