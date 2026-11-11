/* LEVEL_09:0x0C5C68 -- placement copy of LEVEL_01_0C89B8.c: after a state refresh, queues the 30-tick transition when the second query is set and the first equals 2, then plays the confirm sequence if the check holds. */
extern void func_0D4238(int a0);
extern unsigned int func_0D3D08(void);
extern unsigned int func_0D3D18(void);
extern int func_12BC28(void);
extern void func_12BD08(void);
extern void func_12E678(int *p, int a1);

void func_0C5C68(int *p)
{
    unsigned int first;
    unsigned int second;

    func_0D4238(5);
    first = func_0D3D08();
    second = func_0D3D18();
    if (second != 0 && first == 2) {
        func_12E678(p, 30);
    }
    if (func_12BC28() != 0) {
        func_12BD08();
        func_12E678(p, 1);
    }
}
