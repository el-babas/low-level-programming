#include "main.h"
/**
 * set_string - puntero cambia de direccion
 * @s: string 1
 * @to: string 2
 */
void set_string(char **s, char *to)
{
	/*conseguimos que **s = *to*/
	*s = to;
}
