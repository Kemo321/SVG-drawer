#pragma once
#include "BaseShape.hpp"

///////////////////////////////////////////////////////////////

class Rect : public BaseShape
{
public:
    void load_from_console_shape();
    void set_width(const std::string color);
    void set_height(const std::string height);
    void set_stroke(const std::string stroke);

    std::string name() const {return "Rectangle";}
    std::string get_width() const {return this->width;}
    std::string get_height() const {return this->height;}
    std::string get_stroke() const {return this->stroke;}
    std::string get_svg_format() const;

protected:
    std::string width;
    std::string height;
    std::string stroke;
};

///////////////////////////////////////////////////////////////

class Circle : public BaseShape
{
public:
    void load_from_console_shape();

    std::string name() const {return "Circle";}
    std::string get_svg_format() const;

protected:
    std::string radius;
};

//////////////////////////////////////////////////////////////////

class Text : public BaseShape
{
public:
    void load_from_console_shape();

    std::string name() const {return "Text";}
    std::string get_svg_format() const;

protected:

    std::string text;
    std::string font_size;
    std::string text_anchor;
};

///////////////////////////////////////////////////////////

class Line : public BaseShape
{
public:
    void load_from_console_shape();

    std::string name() const {return "Line";}
    std::string get_svg_format() const;
    
protected:

    std::pair<std::string, std::string> end;
    
    std::string width;
};