/**
 * Copyright (C) 2015 : Kathrin Hanauer, Olaf Leßenich
 *
 * This file is part of Taffy.
 *
 * Taffy is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Taffy is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Taffy. If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact information:
 *   https://github.com/xaikal/taffy
 *   taffy@xaikal.org
 */


#ifndef FILE_H
#define FILE_H

#include "dbobject.h"

#include <QString>
#include <QDateTime>

namespace taffy {

class File : public DbObject
{
public:
    File(const QString &fileName, int id = DbObject::NO_ID);
    virtual ~File();

    bool exists() const;
    QString getPath() const;
    int getSize() const;
    QString getHash() const;
    QDateTime getLastModified() const;

private:
    struct Data;
    Data *d;
};

}

#endif // FILE_H
