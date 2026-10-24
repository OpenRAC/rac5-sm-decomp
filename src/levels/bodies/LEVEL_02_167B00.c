/* LEVEL_02:0x167B00 -- recopie les deux premiers flottants du module
   d'indice (table a pas de 24) dans la sortie. */

typedef struct {
    int p00;
    float *p;
    int p08;
    int p0C;
    int p10;
    int p14;
} Ent;

void func_167B00(char *a0, unsigned char i, float *out)
{
    Ent *e = (Ent *)*(char **)(a0 + 0x54) + i;
    float *src = e->p;

    out[0] = src[0];
    out[1] = src[1];
}
