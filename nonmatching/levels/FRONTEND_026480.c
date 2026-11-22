/* USA FRONTEND.REL:0x026480 (22 November 2026): port of a sister decompilation
 * twin whose bytes compile exactly, not accepted.
 * No inventory interval starts at this offset. No matching credit.
 */
/* FRONTEND:0x026480 -- unlinks and returns the registered frame-info record starting at the given address. Ported from rac5-sm-decomp src/boot/__deregister_frame_info.c (__deregister_frame_info). */
typedef struct frame_info {
    void *buffer_owner;
    int pad4;
    void *begin;
    void *buffer;
    int pad10;
    struct frame_info *next;
} frame_info;

extern frame_info *D_001EF340;
extern void free(void *p);
extern void abort(void) __attribute__((noreturn));

void *func_026480(void *begin) {
    frame_info **p;
    frame_info *ob;

    for (p = &D_001EF340; *p != 0; p = &(*p)->next) {
        ob = *p;
        if (ob->begin == begin) {
            *p = ob->next;
            if (ob->buffer_owner != 0) {
                free(ob->buffer);
            }
            return ob;
        }
    }
    abort();
}
