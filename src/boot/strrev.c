/* strrev, retail 0x01ECA5B8: finds the string end with a do-while length scan, then swaps characters pairwise toward the middle; returns the string. */
char *strrev(char *s)
{
    int i;
    int j;
    int n;
    char t;
    n = 0;
    if (s[0] != 0) {
        do {
            n++;
        } while (s[n] != 0);
    }
    n--;
    for (i = 0; i < n; i++, n--) {
        t = s[i];
        s[i] = s[n];
        s[n] = t;
    }
    return s;
}
