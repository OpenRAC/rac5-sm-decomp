/* LEVEL_08:0x1F4DC0 -- forwards the object with the two fixed table addresses. */
extern char D_00276E20[];
extern char D_00276E30[];
extern void func_1F47D8(void *o, char *a, char *b);
void func_1F4DC0(void *o)
{
    func_1F47D8(o, D_00276E20, D_00276E30);
}
