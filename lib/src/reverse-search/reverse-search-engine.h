#ifndef REVERSE_SEARCH_ENGINE_H
#define REVERSE_SEARCH_ENGINE_H

#include <QIcon>
#include <QString>
#include <QUrl>


class ReverseSearchEngine
{
	public:
		ReverseSearchEngine();
		ReverseSearchEngine(int id, QString icon, QString name, QString tpl, int order);
		void searchByUrl(QUrl url) const;

		int id() const;
		QIcon icon() const;
		QString name() const;
		QString tpl() const;
		int order() const;

		void setId(int id);
		void setOrder(int order);

	protected:
		QIcon loadIcon(QString path) const;

	private:
		int m_id;
		QIcon m_icon;
		QString m_name;
		QString m_tpl;
		int m_order;
};

#endif // REVERSE_SEARCH_ENGINE_H
