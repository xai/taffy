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


#include "removetagquery.h"

RemoveTagQuery::RemoveTagQuery(const QString &tag, const QStringList &files)
    : TagQuery(files), tag(tag)
{

}

RemoveTagQuery::~RemoveTagQuery()
{

}

QString RemoveTagQuery::getTag() const
{
  return tag;
}

QString RemoveTagQuery::print() const
{
    return QString("Remove tag %1 from file(s) %2").arg(getTag()).arg(getFiles().join(", "));
}

