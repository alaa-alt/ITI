<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
    <xsl:output method="text" encoding="UTF-8"/>
    
    <xsl:template match="/">
        
        <xsl:text>SID,First Name,Last Name,Date&#10;</xsl:text>

        <xsl:apply-templates select="students/student"/>
    </xsl:template>
    
    <xsl:template match="student">
        <xsl:value-of select="@SID"/>
        <xsl:text>,</xsl:text>
        <xsl:value-of select="firstName"/>
        <xsl:text>,</xsl:text>
        <xsl:value-of select="lastName"/>
        <xsl:text>,</xsl:text>
        <xsl:value-of select="date"/>
        <xsl:text>&#10;</xsl:text>
    </xsl:template>
</xsl:stylesheet>
