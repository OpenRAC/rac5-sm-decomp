/* FRONTEND:0x001EB0 -- closes the pad and the light. */
extern void func_001E80(int);
extern void func_006850(int, unsigned int);

void func_001EB0(void)
{
    func_001E80(1);
    func_006850(0, 0xFFFFFFFFu);
}
