#include <stdio.h>
#define BEGIN main(){
#define INTEGER int
#define IF if
#define THEN {
#define ELSE }else{
#define ENDIF }
#define END }
#define PRINT printf

BEGIN
  INTEGER x=10;
  IF (x>=10)
  THEN 
    PRINT("TENGO DIEZ \n");
  ELSE
    PRINT("REPROBARE\n");
  ENDIF
END
