/* FRONTEND:0x007050 -- flushes the two GS paths then syncs the vertex path. */
void sceGsSyncPath(int a, int b);
void sceGsSyncV(int a);
void func_007050(void);

void func_007050(void)
{
    sceGsSyncPath(0, 0);
    sceGsSyncV(0);
    func_01C750();
}
