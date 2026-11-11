/* LEVEL_03:0x1C4918 -- compares a global byte-sized selector with an argument and runs a fixed helper sequence on match. */
extern int D_0020CFFC;
extern int func_1342B8(int a0, unsigned int a1);
extern void func_1C4CC0(int a0);
extern void func_1C1F80(int a0);
extern void func_1C3098(int a0);
extern void func_1C3758(int a0);

void func_1C4918(int a0)
{
    if (D_0020CFFC >= 0) {
        if (func_1342B8(0, *(unsigned char *)&D_0020CFFC) != a0) {
            return;
        }
    }
    func_1C4CC0(a0);
    func_1C1F80(a0);
    func_1C3098(a0);
    func_1C3758(a0);
}
