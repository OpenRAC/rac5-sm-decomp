/* strround, retail 0x01ECA548: rounds a decimal digit string at n digits, carrying through nines; returns 0 when the carry runs off the front. */
int strround(char *s, int n)
{
    char *p;
    if (n > 0) {
        n--;
        p = s + n;
        if (*p >= '5') {
            do {
                *p = '0';
                n--;
                p--;
            } while (n > 0 && *p == '9');
            if (s[n] == '9') return 0;
            s[n]++;
        }
    }
    return 1;
}
