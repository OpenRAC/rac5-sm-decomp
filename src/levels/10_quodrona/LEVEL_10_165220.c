/* LEVEL_10:0x165220 -- runs the shared setup and stores the handle returned for a fixed hash into a global. */
extern int D_00210404;
extern void func_074660(void);
extern int func_127EC8(unsigned int value);

void func_165220(void)
{
    func_074660();
    D_00210404 = func_127EC8(0xBCDA8C3Fu);
}
