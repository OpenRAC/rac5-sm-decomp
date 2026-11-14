/* __eq__C9type_infoRC9type_info -- type_info equality: the same object, or equal names. */
typedef struct {
    const char *name;
} tTypeInfo;

extern int strcmp(const char *a, const char *b);

int __eq__C9type_infoRC9type_info(const tTypeInfo *a, const tTypeInfo *b) {
    int equal = 0;

    if (b == a || strcmp(a->name, b->name) == 0) {
        equal = 1;
    }
    return equal;
}
