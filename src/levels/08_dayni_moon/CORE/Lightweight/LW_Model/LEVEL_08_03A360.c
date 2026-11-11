/* LEVEL_08:0x03A360 -- runs the update, then picks one of two handlers for
   event 7 from a global flag. */
extern unsigned char D_0023D496;
extern void func_0392C8(void);
extern void func_0AB208(int);
extern void func_0AB228(int);

void func_03A360(void)
{
    func_0392C8();
    if (D_0023D496)
        func_0AB208(7);
    else
        func_0AB228(7);
}
