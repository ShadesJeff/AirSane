
#ifndef more_saneopts_h
#define more_saneopts_h

#ifndef SANE_I18N
#define SANE_I18N(text) text
#endif

#define MORE_SANE_NAME_ALD   		"ald"
#define MORE_SANE_TITLE_ALD   		SANE_I18N("Auto Lower Edge Detection")
#define MORE_SANE_DESC_ALD          SANE_I18N("Scanner detects paper lower edge. May confuse some frontends.")

#endif /* more_saneopts_h */
