extern float D_001FCCC8;
extern float D_001FCCCC;

void func_036CE0(char *a0, int a1, unsigned a2);
void func_052730(char *a0);
void func_052178(char *a0, float f12, float f13);
void func_0518C8(char *a0);
void func_051440(char *a0);
void func_0517E8(char *a0);
void func_052478(char *a0);
void func_050DE0(char *a0);
void func_051168(char *a0);

void func_050CE0(char *a0)
{
    if (*(int *)(a0 + 0x5C8) == 0) {
        func_036CE0(a0, 4, 0x0478FE9Au);
        func_036CE0(a0, 5, 0x0478FE9Au);
    }
    func_052730(a0);
    func_052178(a0, D_001FCCCC, D_001FCCC8);
    func_0518C8(a0);
    func_051440(a0);
    func_0517E8(a0);
    if (*(short *)(a0 + 0x102) != 4) {
        func_052478(a0);
        func_050DE0(a0);
    }
    func_051168(a0);
}
