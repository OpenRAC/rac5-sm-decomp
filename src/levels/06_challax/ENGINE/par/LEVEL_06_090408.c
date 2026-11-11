/* LEVEL_06:0x090408 -- placement copy of LEVEL_08_09F780.c. */
extern char D_0028504C[];
extern void func_090060(long long, void *, void *);

void func_090408(long long value, int index)
{
    char *entry = D_0028504C + index * 40;
    func_090060(value, entry + 16, entry);
}