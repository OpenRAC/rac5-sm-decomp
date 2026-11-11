typedef struct {
    int a;
    int b;
    int c;
    float d;
} Rec;

extern Rec D_003131A8;
extern char D_003131B8[];
extern char D_003131F0[];

void func_12E7E0(void *x);
void func_0C3F88(void *x);
void func_0C4380(void *x, int y);
void func_0C3F60(void *x, int y);

void func_0C4430(void *p, int sel)
{
    if (sel != 0xFFFF)
        return;
    if (p != 0) {
        D_003131A8.c = 0;
        D_003131A8.d = 1.0f;
        D_003131A8.a = 0;
        D_003131A8.b = 0;
        func_12E7E0(D_003131B8);
        func_0C3F88(D_003131F0);

    } else {
        func_0C4380(D_003131F0, 2);
        func_0C3F60(D_003131B8, 2);
    }
}
