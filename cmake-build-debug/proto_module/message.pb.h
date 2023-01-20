/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_MESSAGE_PB_H_INCLUDED
#define PB_MESSAGE_PB_H_INCLUDED
#include <pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
typedef struct _Query_tree {
    int32_t command;
    pb_callback_t filters;
    pb_callback_t settings;
    int32_t ccc;
} Query_tree;

typedef struct _Query_tree_Filter {
    pb_callback_t comp_list;
} Query_tree_Filter;

typedef struct _Query_tree_Field_value_pair {
    pb_callback_t field;
    int32_t val_type;
    bool has_int_val;
    int64_t int_val;
    bool has_real_val;
    float real_val;
} Query_tree_Field_value_pair;

typedef struct _Query_tree_Value_setting {
    Query_tree_Field_value_pair fv;
} Query_tree_Value_setting;

typedef struct _Query_tree_Comparator {
    int32_t operation;
    Query_tree_Field_value_pair fv;
} Query_tree_Comparator;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define Query_tree_init_default                  {0, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define Query_tree_Filter_init_default           {{{NULL}, NULL}}
#define Query_tree_Value_setting_init_default    {Query_tree_Field_value_pair_init_default}
#define Query_tree_Comparator_init_default       {0, Query_tree_Field_value_pair_init_default}
#define Query_tree_Field_value_pair_init_default {{{NULL}, NULL}, 0, false, 0, false, 0}
#define Query_tree_init_zero                     {0, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define Query_tree_Filter_init_zero              {{{NULL}, NULL}}
#define Query_tree_Value_setting_init_zero       {Query_tree_Field_value_pair_init_zero}
#define Query_tree_Comparator_init_zero          {0, Query_tree_Field_value_pair_init_zero}
#define Query_tree_Field_value_pair_init_zero    {{{NULL}, NULL}, 0, false, 0, false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define Query_tree_command_tag                   1
#define Query_tree_filters_tag                   2
#define Query_tree_settings_tag                  3
#define Query_tree_ccc_tag                       4
#define Query_tree_Filter_comp_list_tag          1
#define Query_tree_Field_value_pair_field_tag    1
#define Query_tree_Field_value_pair_val_type_tag 2
#define Query_tree_Field_value_pair_int_val_tag  3
#define Query_tree_Field_value_pair_real_val_tag 4
#define Query_tree_Value_setting_fv_tag          1
#define Query_tree_Comparator_operation_tag      1
#define Query_tree_Comparator_fv_tag             2

/* Struct field encoding specification for nanopb */
#define Query_tree_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, INT32,    command,           1) \
X(a, CALLBACK, REPEATED, MESSAGE,  filters,           2) \
X(a, CALLBACK, REPEATED, MESSAGE,  settings,          3) \
X(a, STATIC,   REQUIRED, INT32,    ccc,               4)
#define Query_tree_CALLBACK pb_default_field_callback
#define Query_tree_DEFAULT NULL
#define Query_tree_filters_MSGTYPE Query_tree_Filter
#define Query_tree_settings_MSGTYPE Query_tree_Value_setting

#define Query_tree_Filter_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  comp_list,         1)
#define Query_tree_Filter_CALLBACK pb_default_field_callback
#define Query_tree_Filter_DEFAULT NULL
#define Query_tree_Filter_comp_list_MSGTYPE Query_tree_Comparator

#define Query_tree_Value_setting_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, MESSAGE,  fv,                1)
#define Query_tree_Value_setting_CALLBACK NULL
#define Query_tree_Value_setting_DEFAULT NULL
#define Query_tree_Value_setting_fv_MSGTYPE Query_tree_Field_value_pair

#define Query_tree_Comparator_FIELDLIST(X, a) \
X(a, STATIC,   REQUIRED, INT32,    operation,         1) \
X(a, STATIC,   REQUIRED, MESSAGE,  fv,                2)
#define Query_tree_Comparator_CALLBACK NULL
#define Query_tree_Comparator_DEFAULT NULL
#define Query_tree_Comparator_fv_MSGTYPE Query_tree_Field_value_pair

#define Query_tree_Field_value_pair_FIELDLIST(X, a) \
X(a, CALLBACK, REQUIRED, STRING,   field,             1) \
X(a, STATIC,   REQUIRED, INT32,    val_type,          2) \
X(a, STATIC,   OPTIONAL, INT64,    int_val,           3) \
X(a, STATIC,   OPTIONAL, FLOAT,    real_val,          4)
#define Query_tree_Field_value_pair_CALLBACK pb_default_field_callback
#define Query_tree_Field_value_pair_DEFAULT NULL

extern const pb_msgdesc_t Query_tree_msg;
extern const pb_msgdesc_t Query_tree_Filter_msg;
extern const pb_msgdesc_t Query_tree_Value_setting_msg;
extern const pb_msgdesc_t Query_tree_Comparator_msg;
extern const pb_msgdesc_t Query_tree_Field_value_pair_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define Query_tree_fields &Query_tree_msg
#define Query_tree_Filter_fields &Query_tree_Filter_msg
#define Query_tree_Value_setting_fields &Query_tree_Value_setting_msg
#define Query_tree_Comparator_fields &Query_tree_Comparator_msg
#define Query_tree_Field_value_pair_fields &Query_tree_Field_value_pair_msg

/* Maximum encoded size of messages (where known) */
/* Query_tree_size depends on runtime parameters */
/* Query_tree_Filter_size depends on runtime parameters */
/* Query_tree_Value_setting_size depends on runtime parameters */
/* Query_tree_Comparator_size depends on runtime parameters */
/* Query_tree_Field_value_pair_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
