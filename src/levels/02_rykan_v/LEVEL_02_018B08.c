extern unsigned char D_00247030;
extern void func_028A48(void);

void func_018B08(void)
{
    if (D_00247030 == 0) {
        D_00247030 = 1;
        func_028A48();
    }
}
