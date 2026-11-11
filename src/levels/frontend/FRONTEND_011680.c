/* FRONTEND:0x011680 -- start-up sequence of the front end. */
void func_011680(void);
void func_00B900(int mode);
void func_015788(void);
void func_00BAD0(int a, int b);
void func_00A9D8(int mode);

void func_011680(void)
{
    func_00C050();
    func_00B900(1);
    func_015788();
    func_00BAD0(0, 0);
    func_00A9D8(4);
    func_00A9D8(5);
}
