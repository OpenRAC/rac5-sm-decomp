/* __deregister_frame_info -- unlinks and returns the registered frame-info record starting at the given address. */
typedef struct frame_info {
    void *buffer_owner;
    int pad4;
    void *begin;
    void *buffer;
    int pad10;
    struct frame_info *next;
} frame_info;

extern frame_info *__frame_info_list;
extern void free(void *p);
extern void abort(void) __attribute__((noreturn));

void *__deregister_frame_info(void *begin) {
    frame_info **p;
    frame_info *ob;

    for (p = &__frame_info_list; *p != 0; p = &(*p)->next) {
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
