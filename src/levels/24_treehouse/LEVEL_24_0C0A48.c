typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_002F78E8;
extern char D_002F78F8[];
extern char D_002F7930[];

void func_12B348(void *x);
void func_0C05A0(void *x);
void func_0C0998(void *x, int y);
void func_0C0578(void *x, int y);

void func_0C0A48(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_002F78E8.c = 0;
        D_002F78E8.d = 1.0f;
        D_002F78E8.a = 0;
        D_002F78E8.b = 0;
        func_12B348(D_002F78F8);
        func_0C05A0(D_002F7930);

    } else {
        func_0C0998(D_002F7930, 2);
        func_0C0578(D_002F78F8, 2);
    }
}
