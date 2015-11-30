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


#ifndef REMOVETAGQUERY_H
#define REMOVETAGQUERY_H

#include "query.h"

namespace taffy {

/*!
 * A query that removes a tag from one or more files.
 */
class RemoveTagQuery : public Query
{
public:
    /*!
     * Creates a new RemoveTagQuery.
     *
     * @param   tag     The tag that is removed from the file(s).
     * @param   files   A list of files that are de-tagged.
     */
    RemoveTagQuery(const QString &tag, const QStringList &files);
    virtual ~RemoveTagQuery();

    /*!
     * Returns the tag that is removed.
     *
     * @return  Tag that is removed.
     */
    QString getTag() const;

    virtual QString print() const override;
    virtual bool exec(TaffyDB *db) override;

private:
    QString tag;
};

}

#endif // REMOVETAGQUERY_H
