extern int D_001C6FFC;
extern int D_001C6FF4;
extern int D_001C6FF8;
extern void MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(int mode);
extern void LoadIdentity__Q34scee3Psp3Gumv(void);
extern void UpdateMatrix__Q34scee3Psp3Gumv(void);
extern void func_09C4B8(void);
extern void func_09A2F8(int a, int b);
extern void func_09A300(int a, int b);
extern void func_09A308(int a, int b);
extern void func_09A188(int a);
extern void func_09A1A8(int a);
extern void func_09A318(float a, float b);

void func_088C30(void)
{
    D_001C6FFC = D_001C6FFC ^ 1;
    D_001C6FF4 = 0;
    D_001C6FF8 = 0;
    MatrixMode__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(2);
    LoadIdentity__Q34scee3Psp3Gumv();
    UpdateMatrix__Q34scee3Psp3Gumv();
    func_09C4B8();
    func_09A2F8(1, 1);
    func_09A300(0, 1);
    func_09A308(0, 0);
    func_09A188(9);
    func_09A1A8(4);
    func_09A318(1.0f, 1.0f);
}
