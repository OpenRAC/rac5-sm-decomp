/* LEVEL_08:0x1AE340 -- runs the shared init and then registers the object with its update callback. */
extern void func_20F700(void);
extern int func_088B68(unsigned int first, unsigned int second, unsigned int third);
extern void func_1AE440(void);

void func_1AE340(unsigned int obj)
{
    func_20F700();
    func_088B68(obj, (unsigned int)func_1AE440, 0);
}
