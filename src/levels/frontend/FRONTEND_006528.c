/* FRONTEND:0x006528 -- caches the 64-bit result of the query. */
extern long long D_0002B010[];
extern long long D_0002B018[];

long long func_007A58(void);

void func_006528(void)
{
    long long v = func_007A58();

    D_0002B010[0] = v;
    D_0002B018[0] = v;
}
