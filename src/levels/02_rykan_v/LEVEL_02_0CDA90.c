typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_00342F28;
extern char D_00342F38[];
extern char D_00342F70[];

void func_13BBF8(void *x);
void func_0CD5E8(void *x);
void func_0CD9E0(void *x, int y);
void func_0CD5C0(void *x, int y);

void func_0CDA90(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_00342F28.c = 0;
        D_00342F28.d = 1.0f;
        D_00342F28.a = 0;
        D_00342F28.b = 0;
        func_13BBF8(D_00342F38);
        func_0CD5E8(D_00342F70);

    } else {
        func_0CD9E0(D_00342F70, 2);
        func_0CD5C0(D_00342F38, 2);
    }
}
