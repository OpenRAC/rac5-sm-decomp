/* LEVEL_01.REL:0x1EBBD0: reviewed 124-byte candidate.
 * sdk991111 C with gnu-ee-trial links 120 bytes; first differs at +92.
 * Retry: Find a qualified source/profile preserving the explicit memcpy call and
 * return after the 92-byte matching prefix.
 * No matching credit.
 */
extern void *func_1EBB48(int, void *, int);
extern void *memcpy(void *, const void *, unsigned int);

void func_1EBBD0(int count, void *first, void *second)
{
    void *source = func_1EBB48(count, first, 0);
    void *target = func_1EBB48(count, second, 0);
    unsigned int size;

    size = count < 0x1F ? 0x10 : (count < 0x40 ? 4 : 8);
    memcpy(target, source, size);
}
