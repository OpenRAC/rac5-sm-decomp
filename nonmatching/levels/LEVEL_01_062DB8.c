/* LEVEL_01.REL:0x062DB8: reviewed 148-byte candidate.
 * pinned C with gnu-ee-trial links 148 bytes; first differs at +52.
 * Retry: Recover the address-of-previous-field preparation and call schedule without
 * an ABI-inconsistent extra callee argument; current C has the correct 148-byte
 * extent but differs at +52.
 * No matching credit.
 */
typedef struct {
    char pad[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
} Object;

typedef struct {
    char pad[0x16c];
    void *level;
    int unused;
    char *previous;
    Object *current;
} State;

extern State D_00238F78;
extern void func_080B38(char *);
extern void func_0809D0(void *, Object *, char **, int, int, int, int, int,
                        float, float, float, float);

void func_062DB8(Object *object)
{
    if (D_00238F78.level != 0 && D_00238F78.current != object) {
        if (D_00238F78.previous != 0) {
            func_080B38(D_00238F78.previous);
        }
        D_00238F78.current = object;
        if (object != 0) {
            func_0809D0(D_00238F78.level, object, &D_00238F78.previous,
                        0, 0, 0, 0, 1,
                        object->f14, object->f18, object->f1c, object->f20);
        }
    }
}
