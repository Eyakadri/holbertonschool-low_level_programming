#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list a;
	int i = 0;
	char *s;

	va_start(a, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(a, int));
			break;
		case 'i':
			printf("%d", va_arg(a, int));
			break;
		case 'f':
			printf("%f", va_arg(a, double));
			break;
		case 's':
			s = va_arg(a, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			i++;
			continue;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}
		i++;
	}
	va_end(a);
	printf("\n");
}
