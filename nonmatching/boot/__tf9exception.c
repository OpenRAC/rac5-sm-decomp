struct TYPE_INFO {
    const char *name;
};

extern struct TYPE_INFO __ti_exception;
extern const char __name_exception[];
extern void __rtti_user(void *addr, const char *name);

struct TYPE_INFO *__tf9exception(void) {
    struct TYPE_INFO *ti = &__ti_exception;
    if (ti->name == 0)
        __rtti_user(ti, __name_exception);
    return ti;
}
