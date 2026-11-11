/* LEVEL_06.REL @ 0x001410 — 48 octets, swc1 */
typedef struct {
    char padF8[0xF8];
    float fF8;
} Rec;

extern Rec *D_001DE148;

float func_075CB0(float f12);
void func_001458(float f12);

void func_001410(float f12)
{
    float x = f12;
    Rec *p = D_001DE148;

    p->fF8 = x;
    func_001458(func_075CB0(f12));
}
