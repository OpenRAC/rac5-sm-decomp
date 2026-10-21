/* The calls below are loader-patched in the retail module, so the
   module file holds a zero target; the address is carried by the
   name, as the level gate requires. */
/* FRONTEND:0x016BF0 -- resets the pause state. */
extern unsigned char D_0030540;
extern int D_0030428;

int func_001B20(int mode);
int D_00000000(void);
void func_001AE0(int mode, int arg);

void func_016BF0(void)
{
    if (D_0030540 != 0) {
        if (func_001B20(6) != 0) {
            if (D_00000000() == 0x38)
                return;
        }
    }
    D_0030428 = 0;
    func_001AE0(0xF, 0);
}
