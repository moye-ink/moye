/* Copyright 2019 The Moye.Ink Authors. All Rights Reserved. */

#ifndef MOYE_MODELS_H_
#define MOYE_MODELS_H_

namespace moye {

class Notebook;
class Note;
class Tag;

// Notebook
class Notebook
{
public:
    Notebook() {}
    virtual ~Notebook() {}
};

// Note
class Note
{
public:
    Note() {}
    virtual ~Note() {}
};

// Tag
class Tag
{
public:
    Tag() {}
    virtual ~Tag() {}
};

} // namespace moye

#endif // MOYE_MODELS_H_
