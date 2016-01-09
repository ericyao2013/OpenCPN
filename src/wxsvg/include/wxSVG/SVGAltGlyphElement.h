//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAltGlyphElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ALT_GLYPH_ELEMENT_H
#define WX_SVG_ALT_GLYPH_ELEMENT_H

#include "SVGTextPositioningElement.h"
#include "SVGURIReference.h"
#include "String_wxsvg.h"
#include "Element.h"
#include "SVGAnimatedType.h"

class wxSVGAltGlyphElement:
  public wxSVGTextPositioningElement,
  public wxSVGURIReference
{
  protected:
    wxString m_glyphRef;
    wxString m_format;

  public:
    inline const wxString& GetGlyphRef() const { return m_glyphRef; }
    inline void SetGlyphRef(const wxString& n) { m_glyphRef = n; }

    inline const wxString& GetFormat() const { return m_format; }
    inline void SetFormat(const wxString& n) { m_format = n; }

  public:
    wxSVGAltGlyphElement(wxString tagName = wxT("altGlyph")):
      wxSVGTextPositioningElement(tagName) {}
    virtual ~wxSVGAltGlyphElement() {}
    wxSvgXmlNode* CloneNode(bool deep = true) { return new wxSVGAltGlyphElement(*this); }
    bool HasAttribute(const wxString& name) const;
    wxString GetAttribute(const wxString& name) const;
    bool SetAttribute(const wxString& name, const wxString& value);
    wxSvgXmlAttrHash GetAttributes() const;
    bool SetAnimatedValue(const wxString& name, const wxSVGAnimatedType& value);
    virtual wxSVGDTD GetDtd() const { return wxSVG_ALTGLYPH_ELEMENT; }
};

#endif // WX_SVG_ALT_GLYPH_ELEMENT_H