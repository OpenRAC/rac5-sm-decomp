/* LEVEL_16:0x04D5A0 -- selon l'etat du mobile : libere quand le mode
   vaut 9, puis, hors de la plage 0x28..0x33, reinstalle le couple de
   reference +0x304 et rafraichit le mobile.

   Le test de plage est unsigned : (mode - 0x28) < 12 saute la remise en
   place, d'ou le sltiu du retail. */

typedef struct {
    float x;
    float y;
    float z;
    float w;
} V4;

extern V4 D_001CCD48;

extern void func_05D4F8(void *a0, int a1);
extern void func_0366C0(void *a0);

void func_04D5A0(void *a0)
{
    unsigned short mode;
    V4 *d;

    if (*(unsigned short *)((char *)a0 + 0x108) == 9) {
        func_05D4F8(a0, 0);
    }
    mode = *(unsigned short *)((char *)a0 + 0x102);
    if ((unsigned)(mode - 0x28) >= 12) {
        d = (V4 *)((char *)a0 + 0x304);
        d->x = D_001CCD48.x;
        d->y = D_001CCD48.y;
        d->z = D_001CCD48.z;
        d->w = D_001CCD48.w;
    }
    func_0366C0(a0);
}
