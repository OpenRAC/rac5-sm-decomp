/* LEVEL_21.REL:0x0fd9c8 -- RAC5 vague 22 (L09), appel d'un helper local
 * avec deux flottants et 1/30. */
typedef struct {
    float a;
    float b;
    char sub[8];
} S;

extern void func_0E6400(char *sub, float x, float y, float z);

void func_0FD9C8(S *p)
{
    func_0E6400(p->sub, p->a, p->b, 1.0f / 30.0f);
}
