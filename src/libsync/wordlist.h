/*
 * SPDX-FileCopyrightText: 2017 Nextcloud GmbH and Nextcloud contributors
 * SPDX-License-Identifier: GPL-2.0-or-later
 */
#ifndef WORDLIST_H
#define WORDLIST_H

#include <QList>
#include <QString>

#include "owncloudlib.h"

namespace OCC {
    namespace WordList {
        OWNCLOUDSYNC_EXPORT QStringList getRandomWords(int nr);
        OWNCLOUDSYNC_EXPORT QString getUnifiedString(const QStringList& l);
    }
}

#endif
