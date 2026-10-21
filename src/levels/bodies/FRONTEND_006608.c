/* FRONTEND:0x006608 -- keeps ticking until the reader reports a new value. */
int func_0065F8(void);
void func_000000(int);

void func_006608(void)
{
    int a = func_0065F8();

    while (func_0065F8() == a) {
        func_000000(1000);
    }
}
