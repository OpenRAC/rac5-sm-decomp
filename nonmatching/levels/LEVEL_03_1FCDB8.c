/* LEVEL_03.REL:0x1FCDB8: reviewed 296-byte candidate, held for ABI review.
 * Stores a reciprocal and converts four packed bytes to floats.
 * gnu-ee-trial-divpad C with gnu-ee-trial links 296/296 bytes and is byte-
 * exact at this and 6 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (pointer), but the accepted
 * caller LEVEL_03_1E21A8.c declares it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct P {
    float f0;
    int f4;
    unsigned int w;
};

void func_1FCDB8(struct P *p)
{
    *(float *)((char *)p + 0xC) = 1.0f / p->f0;
    *(float *)((char *)p + 0x10) = (float)(p->w & 0xFF);
    *(float *)((char *)p + 0x14) = (float)((p->w >> 8) & 0xFF);
    *(float *)((char *)p + 0x18) = (float)((p->w >> 16) & 0xFF);
    *(float *)((char *)p + 0x1C) = (float)((p->w >> 24) & 0xFF);
}
