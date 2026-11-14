/* __cplus_type_matcher 0x01E98120 (14 November 2026).
 * Measured sdk991111: 4 differing words; first difference at +0x1C.
 * Recover the observed types, statement order and lifetimes before retrying.
 * No matching credit.
 */
typedef struct {
    void *match_function;
    short language;
    short version;
    void *value;
    void *type;
    int pad10[6];
    void *original_value;
} cp_eh_info;

typedef struct {
    int pad0;
    short language;
} tExcTable;

extern void *__throw_type_match_rtti(void *catch_type, void *throw_type, void *original_value);

void *__cplus_type_matcher(cp_eh_info *info, int match_info, tExcTable *table) {
    void *ret;

    if (table == 0 || table->language != 4) {
        return 0;
    }
    if (match_info == -1) {
        return info->value;
    }
    ret = __throw_type_match_rtti(((void *(*)(void))match_info)(), info->type, info->original_value);
    if (ret != 0) {
        info->value = ret;
    }
    return ret;
}
