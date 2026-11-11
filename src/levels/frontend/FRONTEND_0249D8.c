/* FRONTEND:0x0249D8 -- looks up an entry, loads its first field from a source word or a looked-up 64-bit value, then adds its third field. */
extern int *func_0264F8(int first, int third);
extern long long *func_0248D0(unsigned short index, char *source, int flags);

int *func_0249D8(int first, char *second, int third)
{
    int *e = func_0264F8(first, third);
    long long v;

    if (e == 0)
        return 0;
    if ((second + *(unsigned short *)((char *)e + 0x298))[0x29c] != 0) {
        v = *func_0248D0(*(unsigned short *)((char *)e + 0x298), second, 0);
        *e = (int)v;
    } else {
        *e = *(int *)second;
    }
    *e += e[2];
    return e;
}
