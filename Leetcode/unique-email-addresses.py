class Solution:
    def numUniqueEmails(self, emails):
        unique = set()
        for email in emails:
            local, domain = email.split('@')
            #print(domain)
            if '+' in local:
                local = local[:local.find('+')]
            if '.' in local:
                local = local.replace('.', '')
            email = local + '@' + domain
            
            unique.add(email)
        return len(unique)
        