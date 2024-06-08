
/** convert string to double */
double atof(char s[])
{
    int i = 0, n, temp;
    while (s[i] == ' ' || s[i] == '\t') { i++; }

    int sign = s[i++] == '-';
    n = sign == 0 ? 1 : -1;

    // read up to .
    while ((temp = s[i++]) != '.') {

    }

}
