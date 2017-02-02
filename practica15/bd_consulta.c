#include<sqlite3.h>
#include<stdio.h>
int main(void)
{
	sqlite3 *db;
	char *err_msg = 0;

	int rc = sqlite3_open("bdbec.db",&db);

	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"No se puede abrir la BD: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);

		return 1;
	}

	char *sql = 	"DROP TABLE IF EXISTS becarios;"
			"CREATE TABLE becarios(ID INT, Nombre TEXT, Edad INT, procedencia TEXT, generacion INT, proyecto TEXT);"
			"INSERT INTO becarios VALUES(1,'Fernando',23,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(2,'Armando',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(3,'Saine',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(4,'Jenn',27,'FAC',11,'SI');"
			"INSERT INTO becarios VALUES(5,'Tachi',22,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(6,'Capi',25,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(7,'Lasaine',23,'FI',11,'SI');"
			"INSERT INTO becarios VALUES(8,'Lajenn',23,'FAC',11,'SI');";


	rc = sqlite3_exec(db,sql,0,0,&err_msg);

	if(rc != SQLITE_OK)
	{
		fprintf(stderr,"SQL error: %s\n",err_msg);
		sqlite3_free(err_msg);
		sqlite3_close(db);

		return 1;

	}
	sqlite3_close(db);

	return 0 ;

}
