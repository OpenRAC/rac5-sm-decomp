/* LEVEL_09.REL @ 0x001410 — 48 octets, swc1 */
typedef struct {
    char padF8[0xF8];
    float fF8;
} Rec;

extern Rec *D_001D9048;

float func_078B50(float f12);
void func_001458(float f12);

void func_001410(float f12)
{
    float x = f12;
    Rec *p = D_001D9048;

    p->fF8 = x;
    func_001458(func_078B50(f12));
}
